// 

inherit ITEM;

void create()
{
	set_name("������ָ���Ͼ�",({"jianshushang","shang"}));
        set_weight(100);
        set("unit", "��");
        set("long",
	"һ�����ؽ�����ʽ����ѧ�鼮��\n"
             );
	set("value",1000);
        set("skill", ([
	"name":"sword",
        "exp_required":100,
        "max_skill":20,
        "sen_cost":10,
        ]) );
}
 
