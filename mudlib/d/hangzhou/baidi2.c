// Room: /d/hangzhou/baidi2.c

inherit ROOM;

void create()
{
	set("short", "�׵�");
	set("long", @LONG
��֦���,�һ�ӭ��.Զ������,�̲����,ˮ��һɫ,��������.΢�� 
���ź����ˮ���������.�űߵĸ��ַ�������,ǧ�˰�̬.������֯.Զ 
����ɽ��ӡ�ں�ˮ֮��,�����ƻ�.
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
"west" : __DIR__"suci",
  "east" : __DIR__"baidi1",
]));
	set("outdoors", "/d/hangzhou");
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/youke.c" : 2,
]));

	setup();
	replace_program(ROOM);
}
