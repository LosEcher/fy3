inherit BULLETIN_BOARD;

void create()
{
	set_name("���԰�", ({ "board"}));
	set("location", "/d/hangzhou/inn");
        set("board_id", "hz_board");
        set("long",
                "���ݳǵ�һ�����԰�,ûʲô���ص�  \n" );
        setup();
        set("capacity", 200);
        replace_program(BULLETIN_BOARD);
}
