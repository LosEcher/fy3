// Room: /d/new/huanhua/road1.c

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
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/butou.c" : 1,
]));
	set("no_clean_up", 0);
	set("outdoors", "/d/new");
	set("exits", ([ /* sizeof() == 2 */
  "southup" : __DIR__"road3",
  "northdown" : __DIR__"dloushan",
]));

	setup();
	replace_program(ROOM);
}
