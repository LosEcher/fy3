// Room: /d/new/huanhua/changlang5.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
һ�������Ļ���,��ɫ����������,��������ÿ�����ɾͳɶ���������.  
�����Ǽ�ɽ,����ͨ��,������Ȥ.����ɽ�����и�����.  
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/new");
	set("exits", ([ /* sizeof() == 3 */
  "southeast" : __DIR__"tingyu",
  "west" : __DIR__"hriver_room",
  "north" : __DIR__"changlang4",
]));

	setup();
	replace_program(ROOM);
}
