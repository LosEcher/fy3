inherit BULLETIN_BOARD;
void create()
{
        set_name("������԰�", ({ "board" }) );
        set("location", "/d/zhongzhou/yinghao");
        set("board_id", "playboard");
        set("long",
                "������ҷ����ĵ���ᣬ��̾������������԰�(help board)��\n" );
        setup();
        set("capacity", 200);
        replace_program(BULLETIN_BOARD);
}
