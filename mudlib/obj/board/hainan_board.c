//�Ϻ����������԰� by xxy 6/14/99
inherit BULLETIN_BOARD;

void create()
{
set_name("��ľ����",({"board"}));
set("location","/d/hainan/jingtang");
set("board_id","hainan_board");
        set("long",
"��ǳ��ɫ��ľ�Ƴɵ�����.�������Ϻ����ӵ�һЩ����.(help board)\n");
        setup();
        set("capacity", 200);
        replace_program(BULLETIN_BOARD);
}
