//̩ɽ�����԰� by xxy 6/14/99
inherit BULLETIN_BOARD;

void create()
{
set_name("̩ɽ���ʯ",({"stone"}));
set("location","/d/taishan/yuhuang");
set("board_id","taishan_board");
        set("long",
"��˵��һ��,��۷�ŭ,�׶�����,�����ϵ�һ�����鲻��\n
����,�䵽̩ɽ֮��,�γɴ�ʯ.(help board)\n");
        setup();
        set("capacity", 200);
        replace_program(BULLETIN_BOARD);
}
