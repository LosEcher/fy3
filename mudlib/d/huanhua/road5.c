// Room: /d/new/huanhua/road5.c

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
  "southup" : __DIR__"whitefeng",
  "northdown" : __DIR__"road4",
]));
	set("outdoors", "/d/new");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
