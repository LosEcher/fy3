inherit BULLETIN_BOARD;

void create()
{
        set_name("�����ճ����԰�", ({ "board" }) );
        set("location", "/u/mool/workroom");
        set("board_id", "wizboard");
        set("long",
                "���Ǹ�������ʦ�����ƻ����԰塣\n" );
        setup();
          set("capacity", 300);
        replace_program(BULLETIN_BOARD);
}

