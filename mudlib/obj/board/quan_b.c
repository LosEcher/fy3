// quanzhen's ������԰�
inherit BULLETIN_BOARD;

void create()
{
	set_name("ȫ��������԰�", ({ "board" }) );
set("location","/d/quanzhen/laojundian");
set("board_id","quan_b");
        set("long",
		"������ҷ����ĵ���ᣬ��̾������������԰�(help board)��\n" );
        setup();
        set("capacity", 200);
        replace_program(BULLETIN_BOARD);
}
