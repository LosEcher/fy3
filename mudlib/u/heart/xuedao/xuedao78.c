// Room: /u/uuui/xuedao/xuedao78.c

inherit ROOM;

void create()
{
	set("short", "����С��");
	set("long", @LONG
һ��ͨ��Ѫ���ŵĻ���С·��·�Ͽյ����ģ�ʮ�ְ�
�������˾�����Щ�����Ĺ��֡����Ͽӿ����ݵģ�����
��ƽ���������˲����ࡣ
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "xuedaomen/1");
	set("exits", ([ /* sizeof() == 2 */
  "northeast" : __DIR__"xuedao79",
  "south" : __DIR__"xuedao51",
]));

	setup();
	replace_program(ROOM);
}
