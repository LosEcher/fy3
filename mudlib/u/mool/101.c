inherit ROOM;

void create()
{
	set("short", "��������");
	set("long", @LONG
����һ��ʲ��Ҳû�еĿշ��䡣
LONG
	);
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
