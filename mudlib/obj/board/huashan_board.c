//��ɽ�����԰� by xxy 6/14/99
inherit BULLETIN_BOARD;

void create()
{
set_name("��ɽ����¼",({"board"}));
set("location","/d/huashan/qunxianguan");
set("board_id","huashan_board");
        set("long",
"��ɽ��������Ⱥ�ı�׼��¼��д������,�Ա����˵�����ʱ\n
��ϰ,�����Ѿ���Ϳ�ĵò�������.(help board)\n");
        setup();
        set("capacity", 200);
        replace_program(BULLETIN_BOARD);
}
