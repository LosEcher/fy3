// /clone/board/baituo_b.c

inherit BULLETIN_BOARD;

void create()
{
      set_name("���̵������԰�",({"board"}) )
;
      set("location","/d/mingjiao/dadian")
;
      set("board_id","mingjiao_b")
;
    set("long","����һ�������̵��ӽ��������԰塣\n")
;
	setup();
	set("capacity", 30);
	replace_program(BULLETIN_BOARD);
}
