inherit BULLETIN_BOARD;

void create()
{
	set_name("С�ʼǱ�", ({ "board" }) );
        set("location", "/u/czgq/workroom");
        set("board_id", "cboard");
        set("long",
		"���ǲ׺��������µĹ����ʼǱ���\n" );
        setup();
        set("capacity", 50);
        replace_program(BULLETIN_BOARD);
}
