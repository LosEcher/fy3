//�㵴�����԰� by xxy 6/14/99
inherit BULLETIN_BOARD;

void create()
{
set_name("�㵴���ư�",({"board"}));
set("location","/d/yandang/luoyan6");
set("board_id","yandang_board");
        set("long",
"�㵴һ�ɼ�¼���ַ��Ƶ�Ӣ�۰�.(help board)\n");
        setup();
        set("capacity", 200);
        replace_program(BULLETIN_BOARD);
}
