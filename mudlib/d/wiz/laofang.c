#include <room.h>

inherit ROOM;

void create ()
{
  set ("short", "��ͼ�����ߵ��η�");
  set ("long", @LONG
	��������ͼ�����ߵ��η����������ǳ���ȥ�ˡ��ú÷�˼����ɵ��£�
��һ��������Υ�������������Σ�û�˻�������ˡ����й��������мҹ棬
��MUDҲ���������ٶ��� help rules �ɣ����WIZS����ԭ���㣬�����ֻ��
ѡ����ɱ suicide -f �ˡ����ס��������ǹ��е����硣

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
//                     __DIR__"npc/yingying" : 1,
                 ]));

  set("no_magic", 1);
  set("valid_startroom", 1);

  setup();
//  call_other("/obj/board/guestboard","???");

}

void init()
{
	add_action("do_nothing","chat");
	add_action("do_nothing","chat*");
	add_action("do_nothing","tell");
	add_action("do_nothing","rumor");
	add_action("do_nothing","rumor*");
	if( wiz_level(this_player())==0)
		this_player()->set("startroom","/d/wiz/laofang");
}

int do_nothing()
{
	object me=this_player();
	if( !wizardp(me))	return 1;
	return 0;
}


