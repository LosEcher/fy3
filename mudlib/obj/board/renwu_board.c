inherit BULLETIN_BOARD;

void create()
{
set_name("����BUGר��",({"board"}));
set("location","/d/zhongzhou/shizhongxin");
set("board_id","renwu_board");
           set("long",
                "����BUGר�á�(help board)��\n");
        setup();
        set("capacity", 200);
        replace_program(BULLETIN_BOARD);

}

