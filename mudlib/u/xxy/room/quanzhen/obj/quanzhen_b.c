
inherit BULLETIN_BOARD;

void create()
{
	set_name("ȫ��������԰�", ({ "board" }) );
	set("location", "/u/lgg/quanzhen/datang1");
	set("board_id", "quanzhen_b");
	set("long", "����һ����ȫ�����½��������԰塣\n" );
	setup();
	set("capacity", 30);
	replace_program(BULLETIN_BOARD);
}

