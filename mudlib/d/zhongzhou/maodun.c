// Room: /d/zhongzhou/maodun.c

inherit ROOM;

void create()
{
	set("short", "ì�ܼ��е�");
	set("long", @LONG
���Ǽ�СС�ĵ���,���е����˾�˵��һ���޲����еľ���,ֻҪ��
��Ҫ,������ʱ��Ǯ�޲�.һЩ��û�����������,ͭ��֮��Ķ���������
�ڵ���,����ȥ������.ǽ���п�����(paizi).
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/maoduntianshi.c" : 1,
]));
set("item_desc",([
"paizi":"�޲����з���(xiubu xxx).\n",
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"wendingnan2",
]));

	setup();
	replace_program(ROOM);
}
