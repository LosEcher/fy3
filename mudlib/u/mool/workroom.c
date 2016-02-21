// Room: /u/mool/workroom.c

inherit ROOM;
#include <ansi.h>;
void create()
{
	set("short", "[1;37m���С��[2;37;0m");
	set("long", @LONG
Խ��ɽ��, ������һ��С¥ǰ.ԭ������������ܵļ�. ̧ͷ
��ȥ,¥�ϴ�ǰ�������˫�������°�ң��Զ��,���ڳ���.
      *      .         .                   .
    .                                      *         .         
                      *            *            .-.
        *        *         .                   (   )       
                    .                   *       '-'
  ,\//,.\//\/.         ,\/,   ,\/.//,                       
  //o\\/o//o\\ ,.,.,   //o\   /o\\o\\         *     .      
    |   |  |  /###/#\    |     |  |      .                 
    |   |  |  |' '|:|    |`=.='|  |                      
   ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^""""""""""~~~~~~


LONG
	);
	set("valid_startroom", 1);
	set("exits", ([ /* sizeof() == 6 */
  "up" : "/u/islet/workroom.c",
  "out" : "/u/annie/workroom.c",
  "east" : "/d/huashan/qunxianguan",
  "down" : "/d/zhongzhou/shizhongxin",
  "west" : "/d/dali/center.c",
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
