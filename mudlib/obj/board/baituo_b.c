  //   Wangzc kunlun's ������԰�
inherit BULLETIN_BOARD;

void create()
{
	set_name("����ʯ",({"board"}));
	set("location","/d/baituo/dating");
          set("board_id", "board");
        set("long",
		"������ҷ����ĵ���ᣬ��̾������������԰�(help board)��\n" );
        setup();
        set("capacity", 200);
        replace_program(BULLETIN_BOARD);
}
