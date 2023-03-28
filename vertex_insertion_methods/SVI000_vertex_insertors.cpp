/*
FYP : 22013

Module:
    Server Skeleton - Vertex Insertors

Description:
    Defines the functions that insert the vertices for the base data of the
    benchmark.
*/

#include "SVI000_vertex_insertors.h"

/*
Description:
    Inserts the investor vertex for the base data.
*/
void insert_investor_vertex(json request, json* response_pointer){
  json response = *response_pointer;

  unsigned long new_investor_vertex_id = request["ID"].get<unsigned long>();
  std::string investor_name = request["NAME"].get<std::string>();

  /*--------------------------------------------------------------------------*/
  /*INSERT INVESTOR VERTEX HERE*/

  //INSERT investor VERTEX
  //INSERT investor_ID
  //INSERT investor_name

  /*--------------------------------------------------------------------------*/

  /*UPDATE SUCCESS IF INSERTION SUCCESSFUL*/
  response["SUCCESS"] = true;

  *response_pointer = response;
}

/*
Description:
    Inserts the tradeBook vertex for the base data.
*/
void insert_tradebook_vertex(json request, json* response_pointer){
  json response = *response_pointer;

  unsigned long new_tradebook_vertex_id = request["ID"].get<unsigned long>();
  int tradebook_amount = request["AMOUNT"].get<int>();
  /*--------------------------------------------------------------------------*/
  /*INSERT TRADEBOOK VERTEX HERE*/

  //INSERT tradeBook VERTEX
  //INSERT tradeBook_ID
  //INSERT investment_amount

  /*--------------------------------------------------------------------------*/

  /*UPDATE SUCCESS IF INSERTION SUCCESSFUL*/
  response["SUCCESS"] = true;

  *response_pointer = response;
}

/*
Description:
    Inserts the company vertex for the base data.
*/
void insert_company_vertex(json request, json* response_pointer){
  json response = *response_pointer;

  unsigned long new_company_vertex_id = request["ID"].get<unsigned long>();
  std::string company_name = request["NAME"].get<std::string>();
  /*--------------------------------------------------------------------------*/
  /*INSERT COMPANY VERTEX HERE*/

  //INSERT company VERTEX
  //INSERT company_ID
  //INSERT company_name

  /*--------------------------------------------------------------------------*/

  /*UPDATE SUCCESS IF INSERTION SUCCESSFUL*/
  response["SUCCESS"] = true;

  *response_pointer = response;
}

/*
Description:
    Inserts the freshness score vertex for the base data.
*/
void insert_freshness_score_vertex(json request, json* response_pointer){
  json response = *response_pointer;

  unsigned long new_fs_vertex_id = request["ID"].get<unsigned long>();
  unsigned long transaction_ID = request["TRANSACTION_ID"].get<unsigned long>();
  /*--------------------------------------------------------------------------*/
  /*INSERT FRESHNESS SCORE VERTEX HERE*/

  //INSERT freshness_score VERTEX
  //INSERT transaction_ID

  /*--------------------------------------------------------------------------*/

  /*UPDATE SUCCESS IF INSERTION SUCCESSFUL*/
  response["SUCCESS"] = true;

  *response_pointer = response;
}
