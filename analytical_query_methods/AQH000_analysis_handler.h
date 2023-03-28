/*
FYP : 22013

Module:
    Server Skeleton - Analytical Query Handlers

Description:
    Header file for the functions that serve the analytical queries sent by the
    Hybrid Query Driver.
*/

#include "../common/SCD001_common_types.h"
#include "../common/SCD002_common_methods.h"
#include "../third_party/json.hpp"

#include <map>
#include <string>

using json = nlohmann::json;

extern Global_Data GD;

#ifndef AQH000_ANALYSIS_HANDLER
#define AQH000_ANALYSIS_HANDLER

void perform_AQ_1(json, json*);

void perform_AQ_2(json, json*);

void perform_AQ_3(json, json*);

void perform_AQ_4(json, json*);

void perform_AQ_5(json, json*);

void perform_AQ_6(json, json*);

#endif
