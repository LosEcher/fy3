// Room: /d/new/huanhua/road2.c

inherit ROOM;

void create()
{
	set("short", "����ɽ��");
	set("long", @LONG
���Ǵ����±߿����Ķ���ɽ��,�����Ǹ��ʵ�ɽʯ,����մ����ƬƬ  
��̦,���µ�ʯ�׿�����ƽ,����������������.ɽ����ɽ�ƶ���,ֻ�ܿ�  
������Զ�ĵط�,ǰ���и�ת��.  
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "southeast" : __DIR__"lshanguan",
  "northdown" : __DIR__"road3",
]));
	set("outdoors", "/d/new");

	setup();
	replace_program(ROOM);
}
