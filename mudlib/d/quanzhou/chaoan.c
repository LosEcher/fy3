// Room: /d/quanzhou/chaoan.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
��ççɭɭ��������,��һ������,�ֿ�ɽ�ڶ���,����������Ȼʯ 
��,���Բ�η�ͼ,Ĳ�����Ϊ��ɫ,��Ϊ����ʯɫ,�ֲ��ʷۺ�ɫ,��� 
��������,�����. 
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/quanzhou");
	set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"bixiao-stone",
]));
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/jushi.c" : 1,
]));

	setup();
	replace_program(ROOM);
}
