#ifndef XMLPARSER_H
#define XMLPARSER_H
#include <iostream>
#include "GameObjets/Creaturas.h"
#include "../sturctures/LinkedList.h"
#include "boost/property_tree/ptree.hpp"
#include "boost/property_tree/xml_parser.hpp"
class XMLParser
{
public:
    XMLParser();
    static std::string lcreat2XML(LinkedList<Creaturas> * lc);
};

#endif // XMLPARSER_H
