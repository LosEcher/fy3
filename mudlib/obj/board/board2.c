  //   Wangzc kunlun's ������԰�
inherit BULLETIN_BOARD;

void create()
{
      set_name("��Ҹ�ʾ��", ({ "board" }) );
        set("location", "/d/kunlun/neiting");
          set("board_id", "board2");
        set("long",
		"������ҷ����ĵ���ᣬ��̾������������԰�(help board)��\n" );
        setup();
        set("capacity", 200);
        replace_program(BULLETIN_BOARD);
}
