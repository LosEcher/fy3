// Room: /d/city2/bridge3.c

inherit ROOM;

void create()
{
	set("short", "�ŵ׶���");
	set("long", @LONG
������С�����࣬һ�ɺ��紵���������ɪɪ������ֻ���뿪��
ˮ�����ŵ׳��,�������¡¡������,�������ˮ����Ǻ�ɫ�Ĺ�ǽ.
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "westup" : __DIR__"bridge",
]));
	set("resource", ([ /* sizeof() == 1 */
  "water" : 1,
]));

	setup();
	replace_program(ROOM);
}
