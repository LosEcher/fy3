//lu's �һ��������԰�
inherit BULLETIN_BOARD;

void create()
{
	set_name("�һ��������԰�", ({ "board" }) );
        set("location", "/d/lu/hall");
        set("board_id", "luboard");
        set("long",
		"�����һ������ĵ���ᣬ��̾������������԰�(help board)��\n" );
        setup();
        set("capacity", 200);
        replace_program(BULLETIN_BOARD);
}
