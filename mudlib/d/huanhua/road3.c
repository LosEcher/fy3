// Room: /d/new/huanhua/road3.c

inherit ROOM;

void create()
{
	set("short", "����ɽ��");
	set("long", @LONG
���Ǵ����±߿����Ķ���ɽ��,�����Ǹ��ʵ�ɽʯ,����մ����ƬƬ 
��̦,ʱ��һ�������֮���������ɽʯ���ӹ�.ɽ�����Ƕ���,�Բ����� 
�ͻ�ʧ�����ȥ,���ҪС����. 
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "northdown" : __DIR__"road1",
  "southup" : __DIR__"road2",
]));
	set("outdoors", "/d/new");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
