// wen's workroom

inherit ROOM;

void create()
{
	set("short","�����Ĳ�����");
      set("long", @LONG
    ֻ�Ǹ����Է��䣬������ʦ�벻Ҫ����update�������л����
LONG);
       set("no_fight",1);
	set("exits", ([ /* sizeof() == 3 */
		"out":"/d/wiz/meeting.c",
	]));
	set("objects",([
		"/d/suzhou/npc/cui":1,
	]));
      	setup();
	replace_program(ROOM);
}
