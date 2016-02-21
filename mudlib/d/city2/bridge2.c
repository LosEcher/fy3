// Room: /d/city2/bridge2.c

inherit ROOM;

void create()
{
	set("short", "�ŵ�����");
	set("long", @LONG
������С�����࣬һ�ɺ��紵���������ɪɪ������ֻ���뿪��
�ŵ����Ǽ����������ˮ,ԶԶ�ܿ�����ɫ�Ĺ�ǽ.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/qigai.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "eastup" : __DIR__"bridge",
]));
	set("resource", ([ /* sizeof() == 1 */
  "water" : 1,
]));

	setup();
	replace_program(ROOM);
}
