//̨����ڤɽׯ���԰� by xxy 6/14/99
inherit BULLETIN_BOARD;

void create()
{
set_name("���û�",({"board"}));
set("location","/d/taiwan/dating");
set("board_id","taiwan_board");
        set("long",
"�׵׵Ļ���,ֻ�������滭�˸�Ѫɫ������,������һƬ�հ�.\n
����һЩ���,�ʵع⻬,����Ƥ����.(help board)\n");
        setup();
        set("capacity", 200);
        replace_program(BULLETIN_BOARD);
}
