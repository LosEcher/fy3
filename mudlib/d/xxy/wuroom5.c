// Room: /d/xxy/wuroom5.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
���������Ӻ�ĵ�̺,�����ϵ�������ı���,��ǰ����̨�ϰ���Щ��ʳ.
һֻ����ɫ��ƿ�в���һ��÷��.
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"wuroom4",
]));
       set("sleep_room",1);
	setup();
	replace_program(ROOM);
}
