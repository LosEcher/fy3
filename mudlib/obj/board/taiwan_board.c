//台湾幽冥山庄留言板 by xxy 6/14/99
inherit BULLETIN_BOARD;

void create()
{
set_name("骷髅画",({"board"}));
set("location","/d/taiwan/dating");
set("board_id","taiwan_board");
        set("long",
"白底的画卷,只在最上面画了个血色的骷髅,底下是一片空白.\n
留有一些题笔,质地光滑,是人皮所制.(help board)\n");
        setup();
        set("capacity", 200);
        replace_program(BULLETIN_BOARD);
}
