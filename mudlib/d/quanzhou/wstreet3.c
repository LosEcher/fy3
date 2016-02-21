// Room: /d/quanzhou/wstreet3.c

inherit ROOM;

void create()
{
	set("short", "��Ԫ�´���");
	set("long", @LONG
��Ԫ����Ȫ������ϵ�һ����Ժ,��˵�����������������,����� 
����Ҳ����������,��Ժ���ſڲ���,����ɫ��Ժǽ,���弶���ߵ�ʯ��,�� 
�������ſڿ���ȥ,�ܼ���һ���ձ�. 
LONG
	);
	set("no_clean_up", 0);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/hufa.c" : 1,
]));
	set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"wstreet2",
  "west" : __DIR__"daxiong",
]));
	set("outdoors", "/d/quanzhou");

	setup();
	replace_program(ROOM);
}
