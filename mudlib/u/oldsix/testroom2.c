// wen's workroom

inherit ROOM;

void create()
{
	set("short","�����ݶ�");
      set("long", @LONG
	���Է��ݶ���ʲô��û�С�
LONG);
	set("exits", ([ /* sizeof() == 3 */
		"south":__DIR__"testroom1.c",
	]));
	set("objects",([
		"/npc/test4":1,
	]));
      	setup();
	replace_program(ROOM);
}
