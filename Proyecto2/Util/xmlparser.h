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
    XMLParser();
    std::string xmlPobl;
     std::string lcreat2XML(LinkedList<Creaturas> * lc);
     void createPob();
     LinkedList<Creaturas> *pob= new LinkedList<Creaturas>();
     LinkedList<Creaturas> *lcreat2XML(std::string  lc);
};

#endif // XMLPARSER_H
