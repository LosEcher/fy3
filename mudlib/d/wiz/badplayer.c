// music.  ��ͼ�����ߵ���Ѷ��

#include <room.h>

inherit ROOM;

void create ()
{
  set ("short", "��ͼ�����ߵ���Ѷ��");
  set ("long", @LONG
	��������ͼ�����ߵ���Ѷ�ҡ��ú÷�˼����ɵ��£���һ��������Υ��
��������������й��������мҹ棬��MUDҲ���������ٶ��� help rules �ɣ�
�������Υ���涨���������η�������������ر���Ҳ�����Լ������ס����
����ǹ��е����硣

LONG
);

//  set("item_desc", ([ /* sizeof() == 2 */
//  "south" : (: look_door,     "south" :),
//  "door" : (: look_door,     "south" :),
//                   ]));
  set("exits", ([ 
//  "up"    : "/d/wiz/meeting",
//  "down"  : "/d/yangzhou/mingyue2",
//  "musix" : "/u/musix/musixroom",

]));
  set("no_fight", "1");

  set("objects", ([ 
//                     __DIR__"npc/panguan" : 1,
                 ]));

  set("no_magic", 1);
  set("valid_startroom", 1);

  setup();
        replace_program(ROOM);

}


