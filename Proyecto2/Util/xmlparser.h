#ifndef XMLPARSER_H
#define XMLPARSER_H
#include <iostream>
#include "GameObjets/Creaturas.h"
#include "../sturctures/LinkedList.h"
#include "../sturctures/Node.h"
#include "boost/property_tree/ptree.hpp"
#include "boost/property_tree/xml_parser.hpp"
#include <boost/foreach.hpp>
class XMLParser
{
public:

    /**
    *
    * @brief constructor
    **/
    XMLParser();
    /**
    *
    * @brief creaturas en xml
    **/
    std::string xmlPobl;
    /**
    * @brief pasa de lista a xml
    * @param lc lista de creaturas
    * @return string con el xml
    **/
     std::string lcreat2XML(LinkedList<Creaturas> * lc);
     /**
     *
     * @brief crea la poblacion  de creaturas
     **/
     void createPob();
     /**
     *
     * @brief lista de creatura
     **/
     LinkedList<Creaturas> *pob= new LinkedList<Creaturas>();
     /**
     * @brief pasa de xml a lista
     * @param lc string de creaturas
     * @return strin con el xml
     **/
     LinkedList<Creaturas> *XML2lcreat(std::string  lc);
};

#endif // XMLPARSER_H
