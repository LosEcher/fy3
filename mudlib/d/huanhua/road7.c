// Room: /d/new/huanhua/road7.c

inherit ROOM;

void create()
{
	set("short", "����ɽ��");
	set("long", @LONG
��ɽ������,����ɽ�ڽ�Ϊ��£,ʯ��Ҳ��˶������խ����.ǰ��  
��Զ,�����ʯ�ֱ��ɽ�ڵ����ߵ���,ȴ��������ܶ�����,����  
,����̾Ϊ��ֹ.  
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/black_man.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "northup" : __DIR__"road6",
]));
	set("outdoors", "/d/new");

	setup();
	replace_program(ROOM);
}
