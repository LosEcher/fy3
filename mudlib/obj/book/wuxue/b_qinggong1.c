// 

inherit ITEM;

void create()
{
	set_name("���Ṧͼ���Ͼ�",({"qinggongshang","shang"}));
        set_weight(100);
        set("unit", "��");
        set("long",
	"һ�����ض�����Ծ����ѧ�鼮��\n"
             );
	set("value",1000);
        set("skill", ([
	"name":"dodge",
        "exp_required":100,
        "max_skill":20,
        "sen_cost":10,
        ]) );
}
 
