// Room: /d/hangzhou/baidi3.c

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
	set("outdoors", "/d/hangzhou");
	set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"hongying",
  "west" : __DIR__"pinghu.c",
"east" : __DIR__"suci",
]));
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/shangren.c" : 1,
]));

	setup();
	replace_program(ROOM);
}
