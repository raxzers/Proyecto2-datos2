#include "xmlparser.h"

XMLParser::XMLParser()
{
createPob();
}

std::string XMLParser::lcreat2XML(LinkedList<Creaturas> *lc)
{
    boost::property_tree::ptree CreatTREE;
        Node<Creaturas> *discreat=nullptr, *next;

        CreatTREE.put("id","Lcr");
        discreat = lc->getFirst();
        for(int i =0;i<20;i++){
            discreat->getData().fillSPECIAL();


            boost::property_tree::ptree  & node= CreatTREE.add("lista.creaturas","");
            node.put("gen", discreat->getData().gen);
            node.put("tag",discreat->getData().unTag);
            node.put("Rart",discreat->getData().atributo[4]);
            node.put("Rarq",discreat->getData().atributo[3]);
            node.put("Rm",discreat->getData().atributo[2]);
            node.put("Rf",discreat->getData().atributo[1]);
            node.put("vel",discreat->getData().atributo[0]);
            next=discreat->getNext();
            discreat=next;


        }



        std::ostringstream buf;
        boost::property_tree::write_xml(buf, CreatTREE, false);
        std::string creaturasXML=buf.str();



        return creaturasXML;
}

void XMLParser::createPob()
{
    for(int i=0;i<20;i++){
        Creaturas c1= Creaturas("cr"+std::to_string(i));
        pob->insertAtEnd(c1);
    }

    this->xmlPobl= lcreat2XML(pob);
}

LinkedList<Creaturas> *XMLParser::lcreat2XML(std::string lc)
{
    LinkedList<Creaturas> *pob= new LinkedList<Creaturas>();
    using boost::property_tree::ptree;
    std::istringstream is (lc);

    ptree pt2;


        read_xml(is,pt2);

        BOOST_FOREACH( ptree::value_type & v,pt2.get_child("lista")){

            if(v.first=="cretura"){
                Creaturas c1= Creaturas(v.second.get<std::string>("tag"),
                          v.second.get<int>("Rart"),
                          v.second.get<int>("Rarq"),
                          v.second.get<int>("Rf"),
                          v.second.get<int>("Rm"),
                          v.second.get<int>("vel"));
                c1.gen=v.second.get<int>("gen");
                pob->insertAtEnd(c1);


                }
    }


    return pob;
}


