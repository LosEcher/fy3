//��ɽ�����԰� by xxy 6/14/99
inherit BULLETIN_BOARD;

void create()
{
set_name("��ɽ��Ե��",({"board"}));
set("location","/d/hengshan/baiyunan");
set("board_id","hengshan_board");
        set("long",
"��ɽ�ɵ����������Եʱ��¼�ı���,���׼ҵ�����͵\n
������Щһͨ,���Ըɴ���������.(help board)\n");
        setup();
        set("capacity", 200);
        replace_program(BULLETIN_BOARD);
}
