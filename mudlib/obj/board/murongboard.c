//lu's �һ��������԰�
inherit BULLETIN_BOARD;

void create()
{
	set_name("���԰�",({"board"}));
	set("location","/d/suzhou/jinfengzhuang");
	set("board_id","murongboard");
        set("long",
	"�����ĵ���ᣬ��̾������������԰�(help board)��\n" );
        setup();
        set("capacity", 200);
        replace_program(BULLETIN_BOARD);
}
