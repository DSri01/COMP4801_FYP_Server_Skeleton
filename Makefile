# FYP : 22013
# Description:
# 							Makefile for the Server Skeleton

FLAGS = --std=c++11

AQH000_analysis_handler.o: analytical_query_methods/AQH000_analysis_handler.cpp analytical_query_methods/AQH000_analysis_handler.h common/SCD001_common_types.h common/SCD002_common_methods.h
	g++ $(FLAGS) -c $<

SEI000_edge_insertors.o: edge_insertion_methods/SEI000_edge_insertors.cpp edge_insertion_methods/SEI000_edge_insertors.h common/SCD001_common_types.h common/SCD002_common_methods.h
	g++ $(FLAGS) -c $<

TQH000_transaction_handler.o: transactional_query_methods/TQH000_transaction_handler.cpp transactional_query_methods/TQH000_transaction_handler.h common/SCD001_common_types.h common/SCD002_common_methods.h
	g++ $(FLAGS) -c $<

SVI000_vertex_insertors.o: vertex_insertion_methods/SVI000_vertex_insertors.cpp vertex_insertion_methods/SVI000_vertex_insertors.h common/SCD001_common_types.h common/SCD002_common_methods.h
	g++ $(FLAGS) -c $<

DSS000_server_skeleton.o: DSS000_server_skeleton.cpp DSS000_server_skeleton.h SVI000_vertex_insertors.o TQH000_transaction_handler.o SEI000_edge_insertors.o AQH000_analysis_handler.o common/SCD001_common_types.h
	g++ $(FLAGS) -c $< -lpthread

main_server: DSS000_server_skeleton.o SVI000_vertex_insertors.o TQH000_transaction_handler.o SEI000_edge_insertors.o AQH000_analysis_handler.o
	g++ $(FLAGS) $^ -o $@ -lpthread

clean_o:
	rm -f *.o

clean:
	rm main_server && make clean_o

.PHONY: clean_o, clean
