#include "xmlparser.h"

XMLParser::XMLParser()
{

}

std::string XMLParser::lcreat2XML(LinkedList<Creaturas> *lc)
{
    boost::property_tree::ptree CreatTREE;

        Creaturas disGl;
        CreatTREE.put("id","Lcr");
        disGl = lc->getFirst()->getData();
        for(int i =0;i<20;i++){
            disGl.display();


            boost::property_tree::ptree  & node= CreatTREE.add("lista.gladiador","");
            node.put("tag",disGl.unTag);
            node.put("Rart",disGl.atributo[4]);
            node.put("Rarq",disGl.atributo[3]);
            node.put("Rm",disGl.atributo[2]);
            node.put("Rf",disGl.atributo[1]);
            node.put("vel",disGl.atributo[0]);




        }



        std::ostringstream buf;
        boost::property_tree::write_xml(buf, CreatTREE, false);
        std::string creaturasXML=buf.str();

        std::cout <<creaturasXML<<std::endl;

        return creaturasXML;
}
