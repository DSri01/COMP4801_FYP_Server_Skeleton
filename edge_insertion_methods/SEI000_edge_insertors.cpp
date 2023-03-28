/*
FYP : 22013

Module:
    Server Skeleton - Edge Insertors

Description:
    Defines the functions that insert the edges for the base data of the
    benchmark.
*/

#include "SEI000_edge_insertors.h"

/*
Description:
    Inserts the friend edge for the base data.
*/
void insert_friend_edge(json request, json* response_pointer){
  json response = *response_pointer;

  unsigned long source_investor_id = request["SOURCE_ID"].get<unsigned long>();
  unsigned long destination_investor_id = request["DESTINATION_ID"].get<unsigned long>();
  /*--------------------------------------------------------------------------*/
  /*INSERT friend EDGE HERE*/

  //INSERT UNDIRECTED friend EDGE BETWEEN GIVEN INVESTOR IDs

  /*--------------------------------------------------------------------------*/

  /*UPDATE SUCCESS IF INSERTION SUCCESSFUL*/
  response["SUCCESS"] = true;

  *response_pointer = response;
}

/*
Description:
    Inserts the mirror edge for the base data.
*/
void insert_mirror_edge(json request, json* response_pointer){
  json response = *response_pointer;

  unsigned long source_tradebook_id = request["SOURCE_ID"].get<unsigned long>();
  unsigned long destination_tradebook_id = request["DESTINATION_ID"].get<unsigned long>();
  /*--------------------------------------------------------------------------*/
  /*INSERT mirror EDGE HERE*/

  //INSERT UNDIRECTED mirror EDGE BETWEEN GIVEN TRADEBOOK IDs

  /*--------------------------------------------------------------------------*/

  /*UPDATE SUCCESS IF INSERTION SUCCESSFUL*/
  response["SUCCESS"] = true;

  *response_pointer = response;
}

/*
Description:
    Inserts the hasbook edge for the base data.
*/
void insert_hasbook_edge(json request, json* response_pointer){
  json response = *response_pointer;

  unsigned long source_investor_id = request["SOURCE_ID"].get<unsigned long>();
  unsigned long destination_tradebook_id = request["TRADEBOOK_ID"].get<unsigned long>();
  /*--------------------------------------------------------------------------*/
  /*INSERT hasBook EDGE HERE*/

  //INSERT UNDIRECTED hasBook EDGE BETWEEN GIVEN INVESTOR ID and TRADEBOOK ID

  /*--------------------------------------------------------------------------*/
  /*UPDATE SUCCESS IF INSERTION SUCCESSFUL*/
  response["SUCCESS"] = true;

  *response_pointer = response;
}
