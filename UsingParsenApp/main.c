/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수 / parson 사용 예제.
  --------------------------------------------------------------------------------
  first created - 2020.02.12
  writer - KimTK.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "parson.h"


void read_json() {
	JSON_Value* rootValue;
	JSON_Object* rootObject;

	rootValue = json_parse_file("package.json");
	rootObject = json_value_get_object(rootValue);

	//사용처리 부분 코딩


	printf("Name : %s\n\n", json_object_get_string(rootObject, "name"));
	printf("Version : %s\n\n", json_object_get_string(rootObject, "version"));
	printf("repo : %s\n\n", json_object_get_string(rootObject, "repo"));
	printf("description : %s\n\n", json_object_get_string(rootObject, "description"));

	JSON_Array* array = json_object_get_array(rootObject, "keywords");
	printf("keywords : \n");
	for (int i = 0; i < json_array_get_count(array); i++)
	{
		printf("%s\n", json_array_get_string(array, i));
	}
	printf("\n");
	printf("license : %s\n\n", json_object_get_string(rootObject, "license"));
	printf("temp : %.1lf\n\n", (double)json_object_get_number(rootObject, "temp"));

	array = json_object_get_array(rootObject, "src");
	printf("src : \n");
	for (int i = 0; i < json_array_get_count(array); i++)
	{
		printf("%s\n", json_array_get_string(array, i));
	}
	printf("\n");


	json_value_free(rootValue);
}

void write_json()
{
	JSON_Value* rootValue;
	JSON_Object* rootObject;

	rootValue = json_value_init_object();
	rootObject = json_value_get_object(rootValue);

	json_object_set_string(rootObject, "Title", "Interstellar");
	json_object_set_number(rootObject, "Year", 2020);
	json_object_set_number(rootObject, "Runtime", 169);
	json_object_set_string(rootObject, "Genre", "Sci-Fi");
	json_object_set_string(rootObject, "Director", "KimTK");

	json_object_set_value(rootObject, "Actors", json_value_init_array());

	JSON_Array* actors = json_object_get_array(rootObject, "Actors");
	
	json_array_append_string(actors, "Matthew McConaughey");
	json_array_append_string(actors, "Anne Hathway");
	json_array_append_string(actors, "Michael Caine");
	json_array_append_string(actors, "Jessica Chastain");
	json_array_append_string(actors, "Casey Affleck");

	json_object_set_number(rootObject, "imdbRating", 8.6);
	json_object_set_boolean(rootObject, "KoreaRelease", 1);




	
	
	
	json_serialize_to_file_pretty(rootValue, "saved.json");
	json_value_free(rootValue);


}
// 메인함수
int main(void)
{
	write_json();

	system("pause");
	return EXIT_SUCCESS;
}