inherit BULLETIN_BOARD;

void create()
{
        set_name("���԰�", ({ "board" }) );
        set("location", "/d/ppl/workroom");
	set("board_id", "ppl_board");
        set("long",
                "�������Լ��µ����԰塣\n" );
        setup();
        set("capacity", 120);
        replace_program(BULLETIN_BOARD);
}
