typedef enum{
	turnon,
	turnoff
}stat_t;
typedef enum{
	TURNON1=1,
	TURNOFF1,
	QUIT
}system2_state_t;
typedef enum{
	g=1,
	o,
	r
}traffic_light_t;

typedef struct
{
	system2_state_t status;
    stat_t engine_s;
    stat_t ac_s;
    stat_t engine_temp_controller;
	int vechile_speed;
	int temp_room;
	int temp_engine;
	traffic_light_t color;
	
}system2_t;