inherit BULLETIN_BOARD;

void create()
{
        set_name("���԰�",({"board"}));
set("location","/d/wudang/sanqingdian");
        set("board_id","wudangboard");
        set("long",
        "�����ĵ���ᣬ��̾������������԰�(help board)��\n" );
        setup();
        set("capacity", 200);
        replace_program(BULLETIN_BOARD);
}
